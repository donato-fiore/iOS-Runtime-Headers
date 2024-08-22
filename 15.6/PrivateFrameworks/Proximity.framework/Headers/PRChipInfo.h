// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PRCHIPINFO_H
#define PRCHIPINFO_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PRChipInfo : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSUInteger ECID; // ivar: _ECID
@property (readonly, nonatomic) unsigned short boardID; // ivar: _boardID
@property (readonly, nonatomic) unsigned int bootMode; // ivar: _bootMode
@property (readonly, nonatomic) unsigned short chipID; // ivar: _chipID
@property (readonly, nonatomic) unsigned short chipRevision; // ivar: _chipRevision
@property (readonly, nonatomic) unsigned char prodMode; // ivar: _prodMode
@property (readonly, nonatomic) unsigned char secureMode; // ivar: _secureMode
@property (readonly, nonatomic) unsigned char securityDomain; // ivar: _securityDomain


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithECID:(NSUInteger)arg0 chipID:(unsigned short)arg1 boardID:(unsigned short)arg2 bootMode:(unsigned int)arg3 prodMode:(unsigned char)arg4 secureMode:(unsigned char)arg5 securityDomain:(unsigned char)arg6 chipRevision:(unsigned short)arg7 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif