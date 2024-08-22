// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSPDOCUMENTREVISION_H
#define TSPDOCUMENTREVISION_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TSPDocumentRevision : NSObject <NSCopying>



@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSString *revisionString;
@property (readonly, nonatomic) int sequence; // ivar: _sequence


+(id)documentRevisionAtURL:(id)arg0 passphrase:(id)arg1 error:(*id)arg2 ;
+(id)revisionWithRevisionString:(id)arg0 ;
+(id)revisionWithSequence:(int)arg0 identifier:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compareSequenceFromRevision:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithRevisionString:(id)arg0 ;
-(id)initWithSequence:(int)arg0 identifier:(id)arg1 ;
-(id)nextRevisionWithIdentifier:(id)arg0 ;


@end


#endif