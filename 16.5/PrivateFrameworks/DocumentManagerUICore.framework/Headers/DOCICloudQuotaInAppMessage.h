// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DOCICLOUDQUOTAINAPPMESSAGE_H
#define DOCICLOUDQUOTAINAPPMESSAGE_H

@class NSArray, UIImage, NSString;

#import <Foundation/Foundation.h>


@interface DOCICloudQuotaInAppMessage : NSObject

@property (readonly, nonatomic) NSArray *actions; // ivar: _actions
@property (readonly, nonatomic) NSUInteger contentType; // ivar: _contentType
@property (readonly, copy, nonatomic) UIImage *icon; // ivar: _icon
@property (readonly, copy, nonatomic) NSString *subTitle; // ivar: _subTitle
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


-(NSUInteger)contentTypeWithMessage:(id)arg0 ;
-(id)initWithContentType:(NSUInteger)arg0 title:(id)arg1 subTitle:(id)arg2 icon:(id)arg3 actions:(id)arg4 ;
-(id)initWithICQInAppMessage:(id)arg0 ;


@end


#endif