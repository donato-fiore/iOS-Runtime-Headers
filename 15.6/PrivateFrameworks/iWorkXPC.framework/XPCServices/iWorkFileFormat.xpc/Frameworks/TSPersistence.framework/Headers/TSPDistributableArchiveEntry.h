// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSPDISTRIBUTABLEARCHIVEENTRY_H
#define TSPDISTRIBUTABLEARCHIVEENTRY_H

@class NSString, SFUDataRepresentation;
@protocol TSPIdentifiedDataRepresentation;

#import <Foundation/Foundation.h>


@interface TSPDistributableArchiveEntry : NSObject <TSPIdentifiedDataRepresentation>

 {
    NSInteger _identifier;
    NSString *_fileStateIdentifier;
    SFUDataRepresentation *_objectData;
    *void _ownedIds;
}


@property (nonatomic) int classType; // ivar: _classType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *relativeDataPath; // ivar: _relativeDataPath
@property (readonly) Class superclass;
@property (nonatomic) unsigned int version; // ivar: _version


-(*void)ownedIds;
-(BOOL)isLoaded;
-(BOOL)setDataRepresentation:(id)arg0 shouldCopy:(BOOL)arg1 error:(*id)arg2 ;
-(NSInteger)identifier;
-(id)dataRepresentation;
-(id)fileStateIdentifier;
-(id)initWithIdentifier:(NSInteger)arg0 ;
-(void)dealloc;
-(void)setFileStateIdentifier:(id)arg0 ;
-(void)setOwnedIds:(*void)arg0 ;


@end


#endif