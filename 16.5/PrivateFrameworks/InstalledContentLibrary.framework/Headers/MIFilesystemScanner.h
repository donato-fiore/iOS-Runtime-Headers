// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MIFILESYSTEMSCANNER_H
#define MIFILESYSTEMSCANNER_H

@class NSString;
@protocol MIFilesystemScannerDelegate;

#import <Foundation/Foundation.h>


@interface MIFilesystemScanner : NSObject

@property (weak, nonatomic) NSObject<MIFilesystemScannerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (readonly, nonatomic) NSString *personaUniqueString; // ivar: _personaUniqueString


-(BOOL)_scanAppsDirectory:(id)arg0 withError:(*id)arg1 ;
-(BOOL)_scanBundleContainersWithClass:(NSUInteger)arg0 withError:(*id)arg1 ignoredErrorOccurredOnOneOrMoreItems:(*BOOL)arg2 ;
-(BOOL)_scanFrameworkDirectory:(id)arg0 withError:(*id)arg1 ;
-(BOOL)_scanFrameworksLocationsWithError:(*id)arg0 ;
-(BOOL)performScanWithError:(*id)arg0 ;
-(id)init;
-(id)initWithScanOptions:(NSUInteger)arg0 ;
-(id)initWithScanOptions:(NSUInteger)arg0 personaUniqueString:(id)arg1 ;


@end


#endif