// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMAPPINSTALL_H
#define BMAPPINSTALL_H

@class BMEventBase, NSString, NSArray;
@protocol BMStoreData;



@interface BMAppInstall : BMEventBase <BMStoreData>



@property (readonly, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, nonatomic) NSString *category; // ivar: _category
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasIsInstall; // ivar: _hasIsInstall
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isInstall; // ivar: _isInstall
@property (readonly, nonatomic) NSArray *subCategories; // ivar: _subCategories
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title; // ivar: _title


+(id)columns;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
+(id)validKeyPaths;
-(BOOL)isEqual:(id)arg0 ;
-(id)initByReadFrom:(id)arg0 ;
-(id)initWithBundleID:(id)arg0 title:(id)arg1 category:(id)arg2 subCategories:(id)arg3 isInstall:(id)arg4 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)jsonDictionary;
-(id)serialize;
-(void)writeTo:(id)arg0 ;


@end


#endif