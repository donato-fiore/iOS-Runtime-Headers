// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSVSEGMENTEDCODINGPACKAGE_H
#define MSVSEGMENTEDCODINGPACKAGE_H

@class NSDictionary, NSMutableDictionary, NSURL;

#import <Foundation/Foundation.h>


@interface MSVSegmentedCodingPackage : NSObject {
    BOOL _needsInfoDictionaryUpdate;
}


@property (readonly, nonatomic) NSDictionary *allVersions;
@property (retain, nonatomic) Class archivedClass; // ivar: _archivedClass
@property (retain, nonatomic) NSMutableDictionary *infoDictionary; // ivar: _infoDictionary
@property (copy, nonatomic) NSURL *packageURL; // ivar: _packageURL
@property (retain, nonatomic) NSMutableDictionary *segmentEncoderMap; // ivar: _segmentEncoderMap


+(id)packageTypeIdentifier;
-(BOOL)deleteWithError:(*id)arg0 ;
-(BOOL)saveWithError:(*id)arg0 ;
-(BOOL)writeWithError:(*id)arg0 ;
-(id)coderTypeForSegment:(id)arg0 ;
-(id)decodersWithError:(*id)arg0 ;
-(id)encoderForSegment:(id)arg0 version:(NSInteger)arg1 ;
-(id)initWithURL:(id)arg0 ;
-(void)reset;
-(void)setNeedsInfoDictionaryUpdate;


@end


#endif