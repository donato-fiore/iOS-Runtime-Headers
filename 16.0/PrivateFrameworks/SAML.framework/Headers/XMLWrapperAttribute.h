// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef XMLWRAPPERATTRIBUTE_H
#define XMLWRAPPERATTRIBUTE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "XMLWrapperNamespace.h"

@interface XMLWrapperAttribute : NSObject {
    ? _attributeNode;
}


@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) XMLWrapperNamespace *ns; // ivar: _ns
@property (nonatomic) int type; // ivar: _type
@property (retain, nonatomic) NSString *value; // ivar: _value


-(?)xmlAttrNodeForNodeerror;
-(id)initWithNode:(struct _xmlAttr *)arg0 error:(*id)arg1 ;


@end


#endif