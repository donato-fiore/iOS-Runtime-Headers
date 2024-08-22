// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFSHOWACTIONINTERFACEDIALOGREQUEST_H
#define WFSHOWACTIONINTERFACEDIALOGREQUEST_H

@class WFDialogRequest, NSString, NSDictionary;
@protocol NSSecureCoding;



@interface WFShowActionInterfaceDialogRequest : WFDialogRequest <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *actionClassName; // ivar: _actionClassName
@property (readonly, nonatomic) NSString *catalystInterfaceClassName;
@property (readonly, copy, nonatomic) NSDictionary *classNamesByType; // ivar: _classNamesByType
@property (readonly, nonatomic) BOOL isCatalystInterfaceRequest;


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithActionClassName:(id)arg0 classNamesByType:(id)arg1 attribution:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif