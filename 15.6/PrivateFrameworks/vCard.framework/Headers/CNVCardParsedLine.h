// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNVCARDPARSEDLINE_H
#define CNVCARDPARSEDLINE_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface CNVCardParsedLine : NSObject

@property (copy) NSString *grouping; // ivar: _grouping
@property BOOL isPrimary; // ivar: _isPrimary
@property (readonly, copy) NSString *name; // ivar: _name
@property (copy) NSArray *parameters; // ivar: _parameters
@property (retain) id *value; // ivar: _value


-(id)description;
-(id)initWithName:(id)arg0 ;


@end


#endif