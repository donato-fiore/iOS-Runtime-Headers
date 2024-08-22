// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBKXMLNODE_H
#define FBKXMLNODE_H

@class NSDictionary, NSArray, NSString;

#import <Foundation/Foundation.h>


@interface FBKXMLNode : NSObject

@property (retain) NSDictionary *attributes; // ivar: _attributes
@property (retain) NSArray *children; // ivar: _children
@property (retain) NSString *content; // ivar: _content
@property (retain) NSString *name; // ivar: _name


-(id)initWithXMLNodePtr:(struct _xmlNode *)arg0 ;


@end


#endif