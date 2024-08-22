// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef COREDAVACEITEM_H
#define COREDAVACEITEM_H



#import "CoreDAVItem.h"
#import "CoreDAVDenyItem.h"
#import "CoreDAVGrantItem.h"
#import "CoreDAVItemWithHrefChildItem.h"
#import "CoreDAVInvertItem.h"
#import "CoreDAVPrincipalItem.h"
#import "CoreDAVItemWithNoChildren.h"

@interface CoreDAVACEItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVDenyItem *deny; // ivar: _deny
@property (retain, nonatomic) CoreDAVGrantItem *grant; // ivar: _grant
@property (retain, nonatomic) CoreDAVItemWithHrefChildItem *inherited; // ivar: _inherited
@property (retain, nonatomic) CoreDAVInvertItem *invert; // ivar: _invert
@property (retain, nonatomic) CoreDAVPrincipalItem *principal; // ivar: _principal
@property (retain, nonatomic) CoreDAVItemWithNoChildren *protectedItem; // ivar: _protectedItem


+(id)copyParseRules;
+(id)privilegeItemWithNameSpace:(id)arg0 andName:(id)arg1 ;
-(id)description;
-(id)init;
-(id)initWithPrincipal:(id)arg0 shouldInvert:(BOOL)arg1 action:(int)arg2 withPrivileges:(id)arg3 ;
-(void)write:(id)arg0 ;


@end


#endif