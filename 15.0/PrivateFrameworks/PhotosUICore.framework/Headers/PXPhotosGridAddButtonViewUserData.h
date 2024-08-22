// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXPHOTOSGRIDADDBUTTONVIEWUSERDATA_H
#define PXPHOTOSGRIDADDBUTTONVIEWUSERDATA_H

@class NSString;
@protocol PXGViewUserData;

#import <Foundation/Foundation.h>


@interface PXPhotosGridAddButtonViewUserData : NSObject <PXGViewUserData>



@property (readonly, copy, nonatomic) id *actionHandler; // ivar: _actionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger style; // ivar: _style
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithStyle:(NSInteger)arg0 actionHandler:(id)arg1 ;


@end


#endif