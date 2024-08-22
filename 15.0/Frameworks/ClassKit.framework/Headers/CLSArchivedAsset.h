// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLSARCHIVEDASSET_H
#define CLSARCHIVEDASSET_H

@class NSString, NSURL;
@protocol CLSRelationable;


#import "CLSObject.h"

@interface CLSArchivedAsset : CLSObject <CLSRelationable>

 {
    BOOL _uploaded;
    BOOL _addedToFilePresenter;
    BOOL _shared;
    NSInteger _totalUnitCount;
    NSInteger _completedUnitCount;
}


@property (retain, nonatomic) NSString *brItemID; // ivar: _brItemID
@property (retain, nonatomic) NSString *brOwnerName; // ivar: _brOwnerName
@property (retain, nonatomic) NSString *brShareName; // ivar: _brShareName
@property (retain, nonatomic) NSString *brZoneName; // ivar: _brZoneName
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *ownerPersonID; // ivar: _ownerPersonID
@property (retain, nonatomic) NSString *relativePathWithinContainer; // ivar: _relativePathWithinContainer
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *ubiquitousContainerName; // ivar: _ubiquitousContainerName
@property (retain, nonatomic) NSURL *url; // ivar: _url


+(BOOL)supportsSecureCoding;
+(id)relations;
-(id)_init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)urlSuitableForOpeningWithCompletion:(id)arg0 ;


@end


#endif