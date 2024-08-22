// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC3VFX11BINDINGIMPL_H
#define _TTC3VFX11BINDINGIMPL_H

@class SwiftObject, NSString;
@protocol _TtP3VFX10VFXBinding_;



@interface _TtC3VFX11BindingImpl : SwiftObject <_TtP3VFX10VFXBinding_>

 {
    ? identifier;
    ? objectName;
    ? bindingName;
    ? userManual;
    ? isPublic;
}


@property (nonatomic, copy) NSString *bindingName;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) CGFloat max; // ivar: max
@property (nonatomic) CGFloat min; // ivar: min
@property (nonatomic) NSInteger objectID; // ivar: objectID
@property (nonatomic, copy) NSString *objectName;
@property (nonatomic) NSInteger semantic; // ivar: semantic
@property (nonatomic) NSInteger type; // ivar: type
@property (nonatomic, copy) NSString *userManual;




@end


#endif