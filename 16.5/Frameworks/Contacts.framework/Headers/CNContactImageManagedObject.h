// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCONTACTIMAGEMANAGEDOBJECT_H
#define CNCONTACTIMAGEMANAGEDOBJECT_H

@class NSManagedObject, NSString, NSUUID, NSData, NSDate, NSNumber;



@interface CNContactImageManagedObject : NSManagedObject

@property (retain, nonatomic) NSString *contactIdentifier;
@property (retain, nonatomic) NSString *cropRectString;
@property (retain, nonatomic) NSString *displayString;
@property (retain, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) NSData *imageData;
@property (retain, nonatomic) NSDate *lastUsedDate;
@property (retain, nonatomic) NSData *poseConfigurationData;
@property (retain, nonatomic) NSNumber *source;
@property (retain, nonatomic) NSString *sourceIdentifier;
@property (retain, nonatomic) NSString *variant;


+(id)managedObjectToContactImageTransform:(SEL)arg0 ;
-(id)cropRectStringFromCGRect:(struct CGRect )arg0 ;
-(void)setupWithContactImage:(id)arg0 contactIdentifier:(id)arg1 ;
-(void)updateWithContactImage:(id)arg0 ;


@end


#endif