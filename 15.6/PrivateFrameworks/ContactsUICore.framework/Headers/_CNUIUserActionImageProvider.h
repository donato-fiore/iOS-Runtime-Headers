// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CNUIUSERACTIONIMAGEPROVIDER_H
#define _CNUIUSERACTIONIMAGEPROVIDER_H

@class NSString;
@protocol CNUIUserActionImageProvider;

#import <Foundation/Foundation.h>


@interface _CNUIUserActionImageProvider : NSObject <CNUIUserActionImageProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)imageForActionType:(id)arg0 imageStyle:(NSInteger)arg1 ;
+(id)imageResourceNameForActionType:(id)arg0 ;
+(id)symbolImageNameForActionType:(id)arg0 ;
+(id)symbolOulinedImageNameForActionType:(id)arg0 ;


@end


#endif