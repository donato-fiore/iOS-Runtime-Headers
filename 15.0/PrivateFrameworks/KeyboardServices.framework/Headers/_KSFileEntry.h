// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _KSFILEENTRY_H
#define _KSFILEENTRY_H

@class NSMutableArray, NSData, NSMutableDictionary, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _KSFileEntry : NSObject <NSSecureCoding>

 {
    NSMutableArray *_tempFiles;
    NSMutableArray *_fileArray;
    NSData *_fileBlob;
}


@property (readonly, retain, nonatomic) NSMutableDictionary *extendedAttributes; // ivar: _extendedAttributes
@property (readonly, retain, nonatomic) NSString *name; // ivar: _name


+(BOOL)supportsSecureCoding;
+(id)entryWithSerialisedDataAtURL:(id)arg0 ;
-(NSUInteger)addBlobToFile:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 ;
-(id)serialiseToTemporaryFile;
-(id)temporaryFileNameForType:(id)arg0 ;
-(void)consistencyCheck;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)loadAttributesFromURL:(id)arg0 ;
-(void)performOnEverything:(id)arg0 ;
-(void)restoreToPath:(id)arg0 ;
-(void)saveAttributesToURL:(id)arg0 ;


@end


#endif