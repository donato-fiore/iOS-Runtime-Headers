// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ADIDRECORD_H
#define ADIDRECORD_H

@class NSString, NSData;

#import <Foundation/Foundation.h>


@interface ADIDRecord : NSObject

@property (retain, nonatomic) NSString *ID; // ivar: _ID
@property (nonatomic) BOOL dirty; // ivar: _dirty
@property (retain, nonatomic) NSData *encryptedID; // ivar: _encryptedID


-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithID:(id)arg0 ;


@end


#endif