// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRE_H
#define MRE_H


#import <Foundation/Foundation.h>


@interface MRE : NSObject

@property (nonatomic) *void mreInstance; // ivar: _mreInstance


-(BOOL)ConvertException:(struct exception *)arg0 toError:(*id)arg1 ;
-(BOOL)ConvertSystemError:(struct system_error *)arg0 toError:(*id)arg1 ;
-(BOOL)FillUnknownError:(*id)arg0 ;
-(id)initWithMREInstance:(*void)arg0 error:(*id)arg1 ;
-(id)initWithSignatures:(id)arg0 density:(NSInteger)arg1 error:(*id)arg2 ;
-(id)search:(id)arg0 error:(*id)arg1 ;
-(void)dealloc;


@end


#endif