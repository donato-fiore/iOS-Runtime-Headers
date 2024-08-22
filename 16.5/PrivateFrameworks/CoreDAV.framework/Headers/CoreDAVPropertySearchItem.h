// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef COREDAVPROPERTYSEARCHITEM_H
#define COREDAVPROPERTYSEARCHITEM_H

@class NSString;


#import "CoreDAVItem.h"
#import "CoreDAVLeafItem.h"

@interface CoreDAVPropertySearchItem : CoreDAVItem

@property (retain, nonatomic) NSString *match; // ivar: _match
@property (retain, nonatomic) NSString *matchTypeAttribute; // ivar: _matchTypeAttribute
@property (retain, nonatomic) CoreDAVLeafItem *prop; // ivar: _prop


-(id)description;
-(id)init;
-(id)initWithSearchPropertyNameSpace:(id)arg0 andName:(id)arg1 ;
-(void)write:(id)arg0 ;


@end


#endif