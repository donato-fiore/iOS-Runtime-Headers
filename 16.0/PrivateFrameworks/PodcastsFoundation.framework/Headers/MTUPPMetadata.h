// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTUPPMETADATA_H
#define MTUPPMETADATA_H

@class NSManagedObject, NSString;



@interface MTUPPMetadata : NSManagedObject

@property (nonatomic) CGFloat bookmarkTime;
@property (nonatomic) BOOL hasBeenPlayed;
@property (retain, nonatomic) NSString *metadataIdentifier;
@property (nonatomic) NSInteger playCount;
@property (nonatomic) CGFloat timestamp;




@end


#endif