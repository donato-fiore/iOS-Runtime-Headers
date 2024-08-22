// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIPROFILESETTINGDESCRIPTION_H
#define SKUIPROFILESETTINGDESCRIPTION_H

@class NSOperationQueue, NSString, UIImage;


#import "SKUISettingDescription.h"

@interface SKUIProfileSettingDescription : SKUISettingDescription {
    NSOperationQueue *_operationQueue;
}


@property (readonly, nonatomic) NSString *handle; // ivar: _handle
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) UIImage *photo; // ivar: _photo


+(Class)_viewClassForSettingDescription:(id)arg0 ;
-(id)initWithViewElement:(id)arg0 parent:(id)arg1 ;
-(void)_fetchAccountInfo;
-(void)_fetchProfilePhoto;
-(void)dealloc;
-(void)reloadData;


@end


#endif