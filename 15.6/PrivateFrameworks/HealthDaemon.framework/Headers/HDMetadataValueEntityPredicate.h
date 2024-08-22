// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDMETADATAVALUEENTITYPREDICATE_H
#define HDMETADATAVALUEENTITYPREDICATE_H

@class NSString;
@protocol HDMetadataPredicate;


#import "HDSQLitePredicate.h"

@interface HDMetadataValueEntityPredicate : HDSQLitePredicate <HDMetadataPredicate>

 {
    HDSQLitePredicate *_keyPredicate;
    HDSQLitePredicate *_valuePredicate;
    BOOL _matchObjectsWithoutKey;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)predicateWithMetadataKey:(id)arg0 allowedValues:(id)arg1 ;
+(id)predicateWithMetadataKey:(id)arg0 exists:(BOOL)arg1 ;
+(id)predicateWithMetadataKey:(id)arg0 value:(id)arg1 operatorType:(NSUInteger)arg2 ;
-(id)SQLForEntityClass:(Class)arg0 ;
-(void)bindToStatement:(struct sqlite3_stmt *)arg0 bindingIndex:(*int)arg1 ;


@end


#endif