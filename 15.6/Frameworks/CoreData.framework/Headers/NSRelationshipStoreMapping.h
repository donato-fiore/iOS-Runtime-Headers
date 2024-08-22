// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSRELATIONSHIPSTOREMAPPING_H
#define NSRELATIONSHIPSTOREMAPPING_H

@class NSString, NSArray;


#import "NSPropertyStoreMapping.h"

@interface NSRelationshipStoreMapping : NSPropertyStoreMapping {
    NSString *_destinationEntityExternalName;
    NSArray *_foreignKeys;
    NSArray *_joins;
    unsigned int _joinSemantic;
}




-(BOOL)isEqual:(id)arg0 ;
-(id)destinationEntityExternalName;
-(id)foreignKeys;
-(id)joins;
-(id)relationship;
-(unsigned int)joinSemantic;
-(void)dealloc;


@end


#endif