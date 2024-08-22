// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef COREDAVXMLELEMENTATTRIBUTE_H
#define COREDAVXMLELEMENTATTRIBUTE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CoreDAVXMLElementAttribute : NSObject

@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSString *nameSpace; // ivar: _nameSpace
@property (retain, nonatomic) NSString *value; // ivar: _value


-(id)description;
-(id)init;
-(id)initWithNameSpace:(id)arg0 name:(id)arg1 value:(id)arg2 ;


@end


#endif