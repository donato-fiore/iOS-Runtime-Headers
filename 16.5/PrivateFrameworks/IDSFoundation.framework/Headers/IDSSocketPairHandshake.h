// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSSOCKETPAIRHANDSHAKE_H
#define IDSSOCKETPAIRHANDSHAKE_H



#import "IDSSocketPairMessage.h"

@interface IDSSocketPairHandshake : IDSSocketPairMessage

@property (readonly, nonatomic) unsigned int versionNumber; // ivar: _versionNumber


-(id)_nonHeaderData;
-(id)initWithCommand:(unsigned char)arg0 underlyingData:(id)arg1 ;
-(id)initWithVersionNumber:(unsigned int)arg0 ;
-(unsigned char)command;


@end


#endif