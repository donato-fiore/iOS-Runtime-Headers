// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef COREDAVINVERTITEM_H
#define COREDAVINVERTITEM_H



#import "CoreDAVItem.h"
#import "CoreDAVPrincipalItem.h"

@interface CoreDAVInvertItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVPrincipalItem *principal; // ivar: _principal


+(id)copyParseRules;
-(id)description;
-(id)init;
-(void)write:(id)arg0 ;


@end


#endif