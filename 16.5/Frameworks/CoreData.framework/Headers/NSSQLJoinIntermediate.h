// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSSQLJOININTERMEDIATE_H
#define NSSQLJOININTERMEDIATE_H

@class NSString;


#import "NSSQLIntermediate.h"
#import "NSSQLRelationship.h"

@interface NSSQLJoinIntermediate : NSSQLIntermediate {
    NSSQLRelationship *_relationship;
    NSString *_sourceAlias;
    NSString *_destinationAlias;
    NSString *_correlationAlias;
    NSUInteger _type;
    BOOL _direct;
}




-(id)description;
-(id)generateSQLStringInContext:(id)arg0 ;
-(void)dealloc;


@end


#endif