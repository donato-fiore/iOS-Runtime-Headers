// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HAPMETADATAUNIT_H
#define HAPMETADATAUNIT_H

@class HMFObject, NSString;



@interface HAPMetadataUnit : HMFObject

@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSString *unitDescription; // ivar: _unitDescription


+(id)init:(id)arg0 withDictionary:(id)arg1 ;
-(id)description;
-(id)generateDictionary;
-(id)initWithName:(id)arg0 description:(id)arg1 ;
-(void)dump;


@end


#endif