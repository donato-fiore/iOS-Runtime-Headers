// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSKNATIVECONTENTDESCRIPTION_H
#define TSKNATIVECONTENTDESCRIPTION_H

@class TSPObject, NSString, NSArray;



@interface TSKNativeContentDescription : TSPObject {
    NSString *_appName;
    NSString *_appVersion;
    NSString *_documentId;
    NSArray *_drawableDescriptions;
}


@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSString *documentId;
@property (copy, nonatomic) NSArray *drawableDescriptions;


-(id)description;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif