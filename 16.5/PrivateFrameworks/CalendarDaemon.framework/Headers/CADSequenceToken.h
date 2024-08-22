// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CADSEQUENCETOKEN_H
#define CADSEQUENCETOKEN_H

@class NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CADSequenceToken : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSDictionary *allDBSequenceMap; // ivar: _allDBSequenceMap


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithAllDBSequenceMap:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMainDBSequence:(int)arg0 ;
-(id)initWithSerializedSequenceString:(id)arg0 ;
-(id)serializedSequenceString;
-(int)mainDBSequence;
-(int)sequenceForDatabaseID:(int)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif