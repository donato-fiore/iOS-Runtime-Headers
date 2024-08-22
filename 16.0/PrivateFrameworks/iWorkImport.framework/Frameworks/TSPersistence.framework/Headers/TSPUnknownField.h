// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSPUNKNOWNFIELD_H
#define TSPUNKNOWNFIELD_H

@protocol TSPForwardsCompatibleField;

#import <Foundation/Foundation.h>


@interface TSPUnknownField : NSObject <TSPForwardsCompatibleField>

 {
    shared_ptr<google::protobuf::UnknownFieldSet> _fieldSet;
    FieldInfo _fieldInfo;
}


@property (readonly, nonatomic) BOOL hasKnownValues;
@property (readonly, nonatomic) BOOL hasUnknownValues;


+(id)unknownFieldWithFieldSet:(*void)arg0 fieldInfo:(*void)arg1 ;
-(*void)fieldInfo;
-(id)debugDescription;
-(id)initWithFieldSet:(*void)arg0 fieldInfo:(*void)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)mergeToMessage:(struct Message *)arg0 reflection:(struct Reflection *)arg1 ;
-(void)mergeToUnknownFieldSet:(*void)arg0 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)updateMessageInfo:(*void)arg0 ;


@end


#endif