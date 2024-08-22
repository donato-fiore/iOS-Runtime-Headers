// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CDBPROP_H
#define CDBPROP_H


#import <Foundation/Foundation.h>


@interface cdbProp : NSObject {
    network_uuid colidGuid;
}


@property unsigned int colidEKind; // ivar: _colidEKind
@property unsigned int colidULID; // ivar: _colidULID
@property unsigned int dbPropId; // ivar: _dbPropId
@property unsigned int dbPropOptions; // ivar: _dbPropOptions
@property unsigned int dbPropStatus; // ivar: _dbPropStatus


-(id)initWithPropID:(unsigned int)arg0 ;
-(int)encodeBuffer:(id)arg0 BufferOffset:(unsigned int)arg1 BytesWritten:(*unsigned int)arg2 ;
-(void)setTimeMidGuid;


@end


#endif