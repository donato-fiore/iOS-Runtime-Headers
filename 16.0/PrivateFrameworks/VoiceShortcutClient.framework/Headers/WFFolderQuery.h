// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFFOLDERQUERY_H
#define WFFOLDERQUERY_H

@protocol NSSecureCoding;


#import "WFResultQuery.h"

@interface WFFolderQuery : WFResultQuery <NSSecureCoding>





+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif