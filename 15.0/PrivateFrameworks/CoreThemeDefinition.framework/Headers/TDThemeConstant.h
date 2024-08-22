// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TDTHEMECONSTANT_H
#define TDTHEMECONSTANT_H

@class NSManagedObject;



@interface TDThemeConstant : NSManagedObject {
    int _identifier;
}




-(id)constantName;
-(id)copyDataFromAttributes;
-(id)debugDescription;
-(id)displayName;
-(unsigned int)identifier;
-(void)setAttributesFromCopyData:(id)arg0 ;
-(void)setConstantName:(id)arg0 ;
-(void)setDisplayName:(id)arg0 ;
-(void)setIdentifier:(unsigned int)arg0 ;


@end


#endif