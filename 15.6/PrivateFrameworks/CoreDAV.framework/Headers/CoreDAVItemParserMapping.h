// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef COREDAVITEMPARSERMAPPING_H
#define COREDAVITEMPARSERMAPPING_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CoreDAVItemParserMapping : NSObject

@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSString *nameSpace; // ivar: _nameSpace
@property (nonatomic) Class parseClass; // ivar: _parseClass


-(id)description;
-(id)initWithNameSpace:(id)arg0 name:(id)arg1 parseClass:(Class)arg2 ;


@end


#endif