// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKFRAMECAPTUREDELEGATE_H
#define SKFRAMECAPTUREDELEGATE_H

@class NSString;
@protocol NSKeyedArchiverDelegate;

#import <Foundation/Foundation.h>


@interface SKFrameCaptureDelegate : NSObject <NSKeyedArchiverDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)archiver:(id)arg0 willEncodeObject:(id)arg1 ;
-(void)archiver:(id)arg0 didEncodeObject:(id)arg1 ;


@end


#endif