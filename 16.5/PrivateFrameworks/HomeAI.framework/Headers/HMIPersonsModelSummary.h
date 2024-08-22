// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMIPERSONSMODELSUMMARY_H
#define HMIPERSONSMODELSUMMARY_H

@class HMFObject, NSDictionary, NSUUID;



@interface HMIPersonsModelSummary : HMFObject

@property (readonly, getter=isExternalLibrary) BOOL externalLibrary; // ivar: _externalLibrary
@property (readonly) NSDictionary *faceCountsByPerson; // ivar: _faceCountsByPerson
@property (readonly) NSUUID *sourceUUID; // ivar: _sourceUUID


-(id)initWithSourceUUID:(id)arg0 externalLibrary:(BOOL)arg1 faceCountsByPerson:(id)arg2 ;


@end


#endif