// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PVLIBRARYGRAPHNODE_H
#define PVLIBRARYGRAPHNODE_H

@class MANode, NSString, NSDictionary, NSDate, NSData;
@protocol PVMomentProtocol, PVFaceProtocol, PVPersonProtocol, PVAssetProtocol;



@interface PVLibraryGraphNode : MANode <PVMomentProtocol, PVFaceProtocol, PVPersonProtocol, PVAssetProtocol>

 {
    unsigned short _domain;
    float _weight;
    NSString *_label;
    NSDictionary *_properties;
}


@property (readonly, nonatomic) unsigned short ageType;
@property (readonly, nonatomic) NSString *anonymizedName;
@property (readonly, nonatomic) CLLocationCoordinate2D approximateCoordinate;
@property (readonly, nonatomic) CGFloat centerX;
@property (readonly, nonatomic) CGFloat centerY;
@property (readonly, nonatomic) NSString *cloudIdentifier;
@property (readonly, nonatomic) NSInteger clusterSequenceNumber;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSData *distanceIdentity;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSUInteger estimatedAssetCount;
@property (readonly, nonatomic) NSUInteger faceCount;
@property (readonly, nonatomic) NSData *faceprintData;
@property (readonly, nonatomic) BOOL favorite;
@property (readonly, nonatomic) NSString *filename;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL hidden;
@property (readonly, nonatomic) BOOL isCoarse;
@property (nonatomic) BOOL isVerified;
@property (retain, nonatomic) NSObject<PVFaceProtocol> *keyFace;
@property (readonly, nonatomic) NSString *localIdentifier;
@property (readonly, nonatomic) NSString *localIdentifier;
@property (readonly, nonatomic) NSString *localIdentifier;
@property (readonly, nonatomic) NSString *localIdentifier;
@property (readonly) NSString *localIdentifier;
@property (readonly, nonatomic) CLLocationCoordinate2D locationCoordinate;
@property (nonatomic) NSInteger manualOrder;
@property (readonly, nonatomic) NSString *originalFilename;
@property (readonly, nonatomic) NSString *personLocalIdentifier;
@property (readonly, nonatomic) NSUInteger pixelHeight;
@property (readonly, nonatomic) NSUInteger pixelWidth;
@property (readonly, nonatomic) unsigned short poseType;
@property (readonly, nonatomic) CGFloat poseYaw;
@property (nonatomic) NSInteger qualityMeasure;
@property (readonly, nonatomic) CGFloat size;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger verifiedType;


+(CGFloat)timeIntervalForDate:(id)arg0 ;
+(id)dateForTimeInterval:(CGFloat)arg0 ;
-(BOOL)isDirty;
-(NSUInteger)type;
-(float)weight;
-(id)dateCreated;
-(id)initWithLabel:(id)arg0 domain:(unsigned short)arg1 weight:(float)arg2 properties:(id)arg3 ;
-(id)label;
-(id)properties;
-(id)propertyDictionary;
-(unsigned short)domain;
-(void)pv_addMergeCandidatePersons:(id)arg0 ;


@end


#endif