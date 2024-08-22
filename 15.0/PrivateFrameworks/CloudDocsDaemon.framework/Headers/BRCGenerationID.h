// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRCGENERATIONID_H
#define BRCGENERATIONID_H

@class NSString, NSNumber, NSData;
@protocol NSCopying, NSSecureCoding, PQLValuable;

#import <Foundation/Foundation.h>


@interface BRCGenerationID : NSObject <NSCopying, NSSecureCoding, PQLValuable>

 {
    unsigned int _generationID;
}


@property (readonly, nonatomic) char * UTF8String;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSNumber *fsGenerationID;
@property (readonly, nonatomic) NSString *generationIDString;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *signature; // ivar: _signature
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)newFromSqliteStatement:(struct sqlite3_stmt *)arg0 atIndex:(int)arg1 ;
+(id)newFromSqliteValue:(struct sqlite3_value *)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToFSGenerationID:(unsigned int)arg0 ;
-(BOOL)isEqualToGenerationID:(id)arg0 orSignature:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFSGenerationID:(unsigned int)arg0 ;
-(id)initWithRelativePath:(id)arg0 ;
-(id)initWithSignature:(*void)arg0 length:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)sqliteBind:(struct sqlite3_stmt *)arg0 index:(int)arg1 ;


@end


#endif