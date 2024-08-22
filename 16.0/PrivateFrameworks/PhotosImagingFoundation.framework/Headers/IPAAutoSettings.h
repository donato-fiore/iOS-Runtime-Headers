// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IPAAUTOSETTINGS_H
#define IPAAUTOSETTINGS_H

@class NSString;
@protocol IPAAutoSettings;

#import <Foundation/Foundation.h>


@interface IPAAutoSettings : NSObject <IPAAutoSettings>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL pending;
@property (readonly) Class superclass;


+(id)pendingWithIdentifier:(id)arg0 ;
-(BOOL)_applyArchiveDictionary:(id)arg0 ;
-(BOOL)applyArchiveDictionary:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAutoSettings:(id)arg0 ;
-(id)archiveDictionary;
-(id)init;
-(id)initWithIdentifier:(id)arg0 ;
-(void)_archiveIntoDictionary:(id)arg0 ;


@end


#endif