// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMIFOREGROUNDBLOB_H
#define HMIFOREGROUNDBLOB_H

@class HMFObject;



@interface HMIForegroundBlob : HMFObject

@property (readonly) float blobArea; // ivar: _blobArea
@property (readonly) unsigned short blobID; // ivar: _blobID
@property (readonly) CGRect boundingBox; // ivar: _boundingBox
@property (readonly) ? timeStamp; // ivar: _timeStamp


-(id)initWithBoundingBox:(struct CGRect )arg0 timeStamp:(struct ? )arg1 blobArea:(float)arg2 blobID:(unsigned short)arg3 ;


@end


#endif