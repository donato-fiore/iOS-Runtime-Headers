// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICREADERDELEGATEUTILITIES_H
#define ICREADERDELEGATEUTILITIES_H

@class NSString;
@protocol ICReaderDelegate;

#import <Foundation/Foundation.h>


@interface ICReaderDelegateUtilities : NSObject <ICReaderDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)fileWrapperForURL:(id)arg0 ;
+(id)sharedInstance;
-(id)fileWrapperForURL:(id)arg0 ;


@end


#endif