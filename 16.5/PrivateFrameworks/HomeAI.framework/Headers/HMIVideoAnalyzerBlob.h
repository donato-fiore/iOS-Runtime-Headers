// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMIVIDEOANALYZERBLOB_H
#define HMIVIDEOANALYZERBLOB_H

@class HMFObject;



@interface HMIVideoAnalyzerBlob : HMFObject

@property (readonly) float blobArea; // ivar: _blobArea
@property (readonly) unsigned short blobID; // ivar: _blobID
@property (readonly) CGRect boundingBox; // ivar: _boundingBox
@property (readonly) ? timeStamp; // ivar: _timeStamp


-(id)initWithBoundingBox:(struct CGRect )arg0 timeStamp:(struct ? )arg1 blobArea:(float)arg2 blobID:(unsigned short)arg3 ;


@end


#endif