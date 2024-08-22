// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICASCOLLABORATORDATA_H
#define ICASCOLLABORATORDATA_H

@class NSNumber;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASCollaboratorData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSNumber *countOfCollaboratorAdded; // ivar: _countOfCollaboratorAdded
@property (readonly, nonatomic) NSNumber *countOfCollaboratorRemoved; // ivar: _countOfCollaboratorRemoved


+(id)dataName;
-(id)initWithCountOfCollaboratorAdded:(id)arg0 countOfCollaboratorRemoved:(id)arg1 ;
-(id)toDict;


@end


#endif