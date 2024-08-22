// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSPKNOWNFIELD_H
#define TSPKNOWNFIELD_H

@protocol TSPForwardsCompatibleField;

#import <Foundation/Foundation.h>


@interface TSPKnownField : NSObject <TSPForwardsCompatibleField>

 {
    int _type;
    int _number;
    FieldInfo _fieldInfo;
}


@property (readonly, nonatomic) BOOL hasKnownValues;
@property (readonly, nonatomic) BOOL hasUnknownValues;


+(id)knownFieldWithFieldDescriptor:(*void)arg0 fieldInfo:(*void)arg1 message:(struct Message *)arg2 reflection:(struct Reflection *)arg3 ;
-(*void)fieldInfo;
-(id)debugDescription;
-(id)init;
-(id)initWithFieldDescriptor:(*void)arg0 fieldInfo:(*void)arg1 message:(struct Message *)arg2 reflection:(struct Reflection *)arg3 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)mergeToMessage:(struct Message *)arg0 reflection:(struct Reflection *)arg1 ;
-(void)mergeToUnknownFieldSet:(*void)arg0 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)updateMessageInfo:(*void)arg0 ;


@end


#endif