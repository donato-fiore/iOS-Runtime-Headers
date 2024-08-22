// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGGRAPHBUILDERINSERTEDIDENTIFIEDPERSON_H
#define PGGRAPHBUILDERINSERTEDIDENTIFIEDPERSON_H

@class NSDate;

#import <Foundation/Foundation.h>

#import "PGGraphPersonNode.h"

@interface PGGraphBuilderInsertedIdentifiedPerson : NSObject

@property (retain, nonatomic) NSDate *anniversaryDate; // ivar: _anniversaryDate
@property (retain, nonatomic) NSDate *birthdayDate; // ivar: _birthdayDate
@property (readonly) PGGraphPersonNode *personNode; // ivar: _personNode
@property (nonatomic) NSUInteger relationship; // ivar: _relationship


-(id)initWithPersonNode:(id)arg0 ;


@end


#endif