// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef COREDAVPROPSTATITEM_H
#define COREDAVPROPSTATITEM_H



#import "CoreDAVItem.h"
#import "CoreDAVErrorItem.h"
#import "CoreDAVLeafItem.h"

@interface CoreDAVPropStatItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVErrorItem *errorItem; // ivar: _errorItem
@property (retain, nonatomic) CoreDAVItem *prop; // ivar: _prop
@property (retain, nonatomic) CoreDAVLeafItem *responseDescription; // ivar: _responseDescription
@property (retain, nonatomic) CoreDAVLeafItem *status; // ivar: _status


+(id)copyParseRules;
-(id)description;
-(id)init;


@end


#endif