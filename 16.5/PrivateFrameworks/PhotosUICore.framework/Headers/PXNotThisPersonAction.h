// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXNOTTHISPERSONACTION_H
#define PXNOTTHISPERSONACTION_H

@class PHPerson;
@protocol PXFastEnumeration;


#import "PXPhotosAction.h"

@interface PXNotThisPersonAction : PXPhotosAction {
    id<PXFastEnumeration> *_assets;
    id<PXFastEnumeration> *_faces;
    BOOL _personWasVerified;
}


@property (nonatomic) BOOL didSetPersonAsVerified; // ivar: _didSetPersonAsVerified
@property (readonly, nonatomic) NSObject<PXFastEnumeration> *faces;
@property (readonly, nonatomic) PHPerson *person; // ivar: _person


-(id)actionIdentifier;
-(id)actionNameLocalizationKey;
-(id)analyticsEventName;
-(id)assets;
-(id)initWithPerson:(id)arg0 assets:(id)arg1 ;
-(id)initWithPerson:(id)arg0 faces:(id)arg1 ;
-(void)performAction:(id)arg0 ;
-(void)performUndo:(id)arg0 ;


@end


#endif