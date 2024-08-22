// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPPLUGINFILEMANAGER_H
#define CHIPPLUGINFILEMANAGER_H

@class HMFObject, NSString;
@protocol CHIPPluginFileManager;



@interface CHIPPluginFileManager : HMFObject <CHIPPluginFileManager>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)writeDictionary:(id)arg0 toURL:(id)arg1 error:(*id)arg2 ;
-(id)dictionaryWithContentsOfURL:(id)arg0 error:(*id)arg1 ;


@end


#endif