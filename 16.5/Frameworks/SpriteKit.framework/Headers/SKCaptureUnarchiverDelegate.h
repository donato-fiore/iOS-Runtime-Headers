// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKCAPTUREUNARCHIVERDELEGATE_H
#define SKCAPTUREUNARCHIVERDELEGATE_H

@class NSString;
@protocol NSKeyedUnarchiverDelegate;

#import <Foundation/Foundation.h>


@interface SKCaptureUnarchiverDelegate : NSObject <NSKeyedUnarchiverDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(Class)unarchiver:(id)arg0 cannotDecodeObjectOfClassName:(id)arg1 originalClasses:(id)arg2 ;


@end


#endif