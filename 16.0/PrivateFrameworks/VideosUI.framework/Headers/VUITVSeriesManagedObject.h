// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUITVSERIESMANAGEDOBJECT_H
#define VUITVSERIESMANAGEDOBJECT_H

@class NSManagedObject, NSString, NSSet;



@interface VUITVSeriesManagedObject : NSManagedObject

@property (copy, nonatomic) NSString *canonicalID;
@property (retain, nonatomic) NSSet *episodes;
@property (retain, nonatomic) NSSet *imageInfos;
@property (retain, nonatomic) NSSet *seasons;
@property (copy, nonatomic) NSString *title;


+(id)fetchRequest;


@end


#endif