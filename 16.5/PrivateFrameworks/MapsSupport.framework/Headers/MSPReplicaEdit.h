// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSPREPLICAEDIT_H
#define MSPREPLICAEDIT_H

@class NSUUID;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MSPReplicaEdit : NSObject <NSCopying>



@property (readonly, nonatomic) NSUUID *identifierOfAffectedRecord; // ivar: _identifierOfAffectedRecord


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithIdentifierOfAffectedRecord:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif