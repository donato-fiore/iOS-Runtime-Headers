// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef COREDAVEXPANDPROPERTY_H
#define COREDAVEXPANDPROPERTY_H

@class NSString, NSSet;

#import <Foundation/Foundation.h>


@interface CoreDAVExpandProperty : NSObject

@property (retain, nonatomic) NSString *expandedName; // ivar: _expandedName
@property (retain, nonatomic) NSString *expandedNameSpace; // ivar: _expandedNameSpace
@property (retain, nonatomic) NSSet *propertiesToFind; // ivar: _propertiesToFind


-(id)initWithPropertiesToFind:(id)arg0 expandedName:(id)arg1 expandedNameSpace:(id)arg2 ;


@end


#endif